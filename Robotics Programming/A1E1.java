public class A1E1 {
    public static void main(String[] args) {
        int x = 0;
        int y = 1;
        for(int i = 0; i < 32; i++) {
            System.out.println(x);
            x = x + y;
            System.out.println(y);
            y = y + x;
        }
    }
}
