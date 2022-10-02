package ProgramDesignII.Ch5;

public class Farm {
    public static void main(String[] args) {
        Duck duck = new Duck(true);
        String food = "Hamburger";
        double foodWeight = 2.438;

        if(duck.getCanfly())
            System.out.println("The Duck can fly.");
        else
            System.out.println("The Duck can't fly.");
        
        duck.quack("Hello");
        duck.quack(7);

        System.out.println(duck.eat(food,foodWeight));

        System.out.println(duck.swim((float)7.09879));

        System.out.println(duck.getWeight());
        duck.modHealth(11.34);
        duck.setHealth(98.87);
        System.out.println(duck.getHealth());
    }
}
