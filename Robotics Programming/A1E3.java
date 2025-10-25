// Main.java

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Elevator elevator = new Elevator(1);
        ElevatorController controller = new ElevatorController(elevator, 1, 5);
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print("\nRequest floor: ");
            String input = scanner.nextLine().trim();

            if (input.equalsIgnoreCase("quit")) {
                break;
            }

            try {
                int target = Integer.parseInt(input);
                controller.requestFloor(target);
            } catch (NumberFormatException e) {
                System.out.println("Invalid input. Please enter a number or 'quit'.");
            }
        }

        scanner.close();
    }
}

// Elevator.java

public class Elevator {
    private int currentFloor;

    public Elevator(int initialFloor) {
        currentFloor = initialFloor;
        System.out.println("Elevator instantiated at floor " + currentFloor);
    }

    public void moveUp() {
        currentFloor++;
        System.out.println("Moving up... now at floor " + currentFloor);
    }

    public void moveDown() {
        currentFloor--;
        System.out.println("Moving down... now at floor " + currentFloor);
    }

    public int getCurrentFloor() {
        return currentFloor;
    }
}

// ElevatorController.java

public class ElevatorController {
    private Elevator elevator;
    private int minFloor;
    private int maxFloor;

    public ElevatorController(Elevator elevator, int minFloor, int maxFloor) {
        this.elevator = elevator;
        this.minFloor = minFloor;
        this.maxFloor = maxFloor;
    }

    public void requestFloor(int targetFloor) {
        if (targetFloor < minFloor || targetFloor > maxFloor) {
            System.out.println("Floor " + targetFloor + " is not a valid floor");
            return;
        }

        while (elevator.getCurrentFloor() < targetFloor) {
            elevator.moveUp();
        }
        while (elevator.getCurrentFloor() > targetFloor) {
            elevator.moveDown();
        }

        System.out.println("Arrived at floor " + targetFloor);
    }
}
