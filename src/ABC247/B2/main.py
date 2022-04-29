N = int(input())
l = [list(map(str, input().split())) for l in range(N)]

al = []

for i, D in enumerate(l):
  al.append(D[0])
  al.append(D[1])

print(al)

import collections
ac = collections.Counter(al)

flg = False


for i, D in enumerate(l):
  if (ac[D[0]] >= 2):
    D.remove(D[0])
    
    if (ac[D[0]] >= 2):
      D.remove(D[0])
      flg = True
      break
    
if flg:
  print('No')
  
else:
  print('Yes')
