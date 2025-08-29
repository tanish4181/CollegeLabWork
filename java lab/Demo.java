class Check {

    public int a, b;

    public Check() {

    }

    void display() {
        System.out.println("a,b: " + a + " " + b);
    }
}

public class Demo{

    public static void main(String[] args) {
        Check d1 = new Check();
        d1.display();

    }
}
