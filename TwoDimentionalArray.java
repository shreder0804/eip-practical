import java.util.Arrays;

public class TwoDimentionalArray {

  public static void main(String[] args) {
    // 2차원 배열 선언
    int[][] a = { { 1, 2, 3 }, { 4, 5, 6 } };

    // 2차원 배열은 deepToString을 사용하여 출력
    System.out.println(Arrays.deepToString(a));
  }
}
