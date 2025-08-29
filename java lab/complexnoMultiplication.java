
class Comp {

    public float real, img;

    public Comp(float a, float b) {
        real = a;
        img = b;
        
    }

    public void print() {
        if (img >= 0) {
            System.out.println(real + " + " + img + "i");
        } else {
            System.out.println(real + " - " + (-img) + "i");
        }
    }

    public Comp multiply(Comp x) {
        float a = real * x.real - img * x.img;
        float b = real * x.img + img * x.real;
        return new Comp(a, b);
    }

    public Comp multiply(Comp x, Comp y) {
        float a = x.real * y.real - x.img * y.img;
        float b = x.real * y.img + x.img * y.real;
        return new Comp(a, b);
    }
}

class Multiplication {

    public static void main(String[] args) {
        Comp t = new Comp(4, 2);
        Comp s = new Comp(3, 5);
        System.out.print("t = ");
        t.print();
        System.out.print("s = ");
        s.print();

        Comp r1 = t.multiply(s);
        System.out.print("t * s = ");
        r1.print();

        Comp r2 = r1.multiply(t, s);
        System.out.print("Using overloaded multiply(t, s) = ");
        r2.print();
    }
}
