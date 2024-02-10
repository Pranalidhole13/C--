class Circle{
    public double radius;
    public double area(){
    return Math.PI*radius*radius;
}
}
public class Circle1{
public static void main(String arg[]){
    Circle c1=new Circle();
    System.out.println(c1.area);
}

}