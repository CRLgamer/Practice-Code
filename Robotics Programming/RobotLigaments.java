// Robot.java
public class Robot {
  private final Ligament ligamentOne = new Ligament(0, 1.0);
  private final Ligament ligamentTwo = new Ligament(0, 2.0);
  private final Ligament ligamentThree = new Ligament(0, 3.0);
  
  public Robot() {
    
  }
  
  public void highfive() {
    ligamentOne.setAngle(90);
    ligamentTwo.setAngle(90);
    ligamentThree.setAngle(90);
    
    double pose = ligamentOne.getAngle;
  }
}

// Ligament.java

public class Ligament {
  private final int id;
  private final double length;
  
  private double angle = 0.0;
  
  public Ligament(int motorID, double length) {
    this.motorId = motorId;
    this.length = length;
  }
  
  public double getAngle() {
    return angle;
  }
  
  public void setAngle(double angle) {
   System.out.printIn("Setting angle to " + angle); 
  }
}

// MakeImage.java

public class MakeImage {
  
}
