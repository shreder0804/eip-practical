import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;

public class Datatype02 {

  public static void main(String[] args) {
    // HashSet(중복된 원소를 허용하지 않는 집합)
    HashSet<Number> hs = new HashSet<Number>();
    // ArrayList(크기가 가변적으로 변하는 선형리스트 성질을 가진 자료형)
    ArrayList<Number> a = new ArrayList<Number>();
    // HashMap(키와 값으로 객체를 저장하는 자료구조)
    HashMap hm = new HashMap<>();

    // 1. HashSet example

    // 값 추가 메서드
    hs.add(2);
    hs.add(1);
    hs.add(3);
    hs.add(5);
    hs.add(4);

    // 값 제거 메서드
    hs.remove(2);

    // 1
    System.out.println(hs);

    // HashSet 원소 갯수 체크 메서드
    System.out.println(hs.size());

    // 2. ArrayList example

    // 값 추가 메서드
    a.add(2);
    a.add(1);
    a.add(3);
    a.add(5);
    a.add(4);

    // 해당 번지에 값 추가 메서드
    a.add(2, 10);

    // 값 제거 메서드 remove(인덱스)
    a.remove(1);

    // 2, 10, 3, 5, 4
    System.out.println(a);

    // ArrayList 해당 번지에 있는 값 출력
    System.out.println(a.get(1));

    // ArrayList 원소 갯수 체크 메서드
    System.out.println(a.size());
  }
}
