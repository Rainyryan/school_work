package ProgramDesignII.Ch5;

public class Duck {
    private boolean canfly = false;
    private double weight = 1000;
    private double health = 100.0;
        public double getWeight(){
            return weight;
        }
        public boolean getCanfly(){
            return canfly;
        }
        public Duck(boolean canfly){
            this.canfly = canfly;
        };

        public void quack(int count){
            while(count-- > 0)
                System.out.println("Quack!!");
        }

        public void quack(String sound){
            System.out.println(sound);
        }

        public String eat(String food,double foodWeight) {
            weight += foodWeight;
            return "Thank you! The "+food+" is good!";
        }

        public float swim(float distance){
            return distance - 1;
            
        }

        public double getHealth(){
            return health;
        }

        public void setHealth(double health){
            this.health = health;
        }

        public void modHealth(double value){
            this.health += value;
        }
}