import java.util.*;

public class Spiral
{
    public static void main(String[] args)
    {
        // This is the first half of an ACSL problem.
        /* a=5, b=4 example:
        1  2  3  4  5  6
           17 18 19 20 7
           16 25 26 21 8
           15 24 23 22 9
           14 13 12 11 10
        */
        // Input: m, n, a, b.
        // m and n are the 2 numbers we wish to find the taxicab distance between on the spiral.
        // We begin at 1 and move right, down, left, up, repeat.
        // a is the number of additional horizontal steps we first take to begin the spiral.
        // b is the number of additional vertical steps we first take to begin the spiral.
        Scanner in = new Scanner(System.in);
        int m, n, a, b;
        System.out.println("Please give values for a and b:");
        a = in.nextInt();
        b = in.nextInt();
        System.out.println("Please give values for m and n:");
        m = in.nextInt();
        n = in.nextInt();
        in.close();
        
        // Algorithm: Simulate the spiral 1 number at a time.
        // If we find m or n, note its coordinates.
        // Stop searching when we have both m and n.
        // Finish by outputting the taxicab distance between them.
        int[] currentCoordinates = {0, 0}; // The current location, expressed as coordinates.
        int[] mCoordinates = new int[2];
        int[] nCoordinates = new int[2];
        int current = 1; // The current number we're checking.
        check(current, m, n, currentCoordinates, mCoordinates, nCoordinates);
        while (current <= Math.max(m, n))
        {
            // Here's a key insight: Every time we move horizontally/vertically across,
            // the number of numbers we move by decreases by 1.
            // For example, in the earlier example, for horizontal movement:
            // 1 to 6 is 5 steps; 10 to 14 is 4 steps; 17 to 20 is 3 steps;
            // 22 to 24 is 2 steps; 25 to 26 is 1 step.
            // To program this, we subtract a and b by 1 each time an up/down/left/right is finished.
            
            // Moving right.
            for (int i = 0; i < a; i++)
            {
                if (current > Math.max(m, n)) // Helps us exit the while loop faster.
                    break;
                currentCoordinates[0]++;
                current++;
                check(current, m, n, currentCoordinates, mCoordinates, nCoordinates);
            }
            a--;
            
            // Moving down.
            for (int i = 0; i < b; i++)
            {
                if (current > Math.max(m, n))
                    break;
                currentCoordinates[1]--;
                current++;
                check(current, m, n, currentCoordinates, mCoordinates, nCoordinates);
            }
            b--;
            
            // Moving left.
            for (int i = 0; i < a; i++)
            {
                if (current > Math.max(m, n))
                    break;
                currentCoordinates[0]--;
                current++;
                check(current, m, n, currentCoordinates, mCoordinates, nCoordinates);
            }
            a--;
            
            // Moving up.
            for (int i = 0; i < b; i++)
            {
                if (current > Math.max(m, n))
                    break;
                currentCoordinates[1]++;
                current++;
                check(current, m, n, currentCoordinates, mCoordinates, nCoordinates);
            }
            b--;
        }
        
        // Standard taxicab calculation.
        System.out.println(Math.abs(mCoordinates[0] - nCoordinates[0]) + Math.abs(mCoordinates[1] - nCoordinates[1]));
    }
    
    // If we've reached the number m or the number n, we must update
    // the correct coordinate array.
    // Note: The reason why we don't use "else if" here is for the case where
    // m and n are equal.
    public static void check(int current, int m, int n, int[] currentCoordinates, int[] mCoordinates, int[] nCoordinates)
    {
        if (current == m)
        {
            mCoordinates[0] = currentCoordinates[0];
            mCoordinates[1] = currentCoordinates[1];
        }
        if (current == n)
        {
            nCoordinates[0] = currentCoordinates[0];
            nCoordinates[1] = currentCoordinates[1];
        }
    }
}
