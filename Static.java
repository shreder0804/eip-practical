class Count {

  // static 변수는 한번만 초기화됨
  static int count = 0;
}

public class Static {

  public static void main(String[] args) {
    // static은 프로그램이 종료될 때까지 변수가 유지되고 최초 한번만 초기화 되기 때문에
    // 1, 2가 출력됨
    Count c = new Count();
    c.count++;
    System.out.println(c.count);
    c.count++;
    System.out.println(c.count);
  }
}
