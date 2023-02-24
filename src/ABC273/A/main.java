import java.util.*;

class Main {
  public static int f(int n) {
    if (n == 0) {
      return 1;
    }
    return n * f(n - 1);
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int ans = f(n);
    System.out.println(ans);
    sc.close();
  }
}