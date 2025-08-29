package jump;
class Break {

    public static void main(String[] args) {
        for (int j = 0; j < 10; j++) {
            if (j == 5) {
                break;
            }
            System.out.println(j);
        }
        System.out.println("Loop is breaked");
    }
}
