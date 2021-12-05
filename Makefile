COMPOSE = docker-compose -f ./docker-compose.yml -p cpp-docker

init:
	$(COMPOSE) build

rule:
	$(eval path := $(shell cat tmppath))

new:
	mkdir -p ./src/${path}
	cp -r ./src/sample/* ./src/${path}
	echo ${path} > tmppath
	code ./src/${path}/main.cpp ./src/${path}/*.in ./src/${path}/*.out

set:
	echo ${path} > tmppath
	code ./src/${path}/main.cpp ./src/${path}/*.in ./src/${path}/*.out

add_test: rule
	$(eval testcount := $(shell ./lib/add_test.sh $(path)))
	code ./src/${path}/${testcount}.in ./src/${path}/${testcount}.out

build: rule
	$(COMPOSE) run cpp sh -c 'g++ ./src/$(path)/main.cpp -o a.out'

run: rule
	$(COMPOSE) run cpp sh -c 'g++ ./src/$(path)/main.cpp -o a.out; ./a.out; rm a.out'

test: rule
	$(COMPOSE) run cpp sh -c 'g++ ./src/$(path)/main.cpp -o a.out; ./lib/test.sh $(path); rm a.out'

sh:
	$(COMPOSE) run cpp sh

clean:
	$(COMPOSE) down -v --rmi all; rm a.out
