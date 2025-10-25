public class ExcersiseOne {
    public static void main(String[] args) {
        int count = 1;
        int x = 0;
        int y = 1;
        while(count<64) {
            System.out.println(x);
            count++;
            x = x + y;
            System.out.println(y);
            count++;
            y = y + x;
        }
    }
}
