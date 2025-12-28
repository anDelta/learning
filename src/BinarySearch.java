import java.util.ArrayList;
import java.util.Scanner;

public class BinarySearch {

    public static int binarySearch(ArrayList<Integer> nums, int target){
        int low = 0, high = nums.size() - 1, middle;

        while(low <= high){
            middle = low+(high-low)/2;

            if(nums.get(middle).equals(target)){
                return middle;
            }
            else if(nums.get(middle) < target){
                low = middle+1;
            }
            else{
                high = middle-1;
            }
        }

        return -1;
    }

    public static boolean isAscending(ArrayList<Integer> nums){
        if(nums == null || nums.size() < 2) return true;

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums.get(i) > nums.get(i+1)){
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args){
        Scanner reader = new Scanner(System.in);

        ArrayList<Integer> nums = new ArrayList<>();
        int target, targetPosition;
        boolean order;

        System.out.println("|Create an Array in ascending order|\n");
        System.out.print("Type a number (letter to exit): ");

        while(reader.hasNextInt()){
            System.out.print("Type a number (letter to exit): ");
            int x = reader.nextInt();
            nums.add(x);
        }

        reader.next();

        order = isAscending(nums);

        if(!order) {
            System.out.println("\nArray in non-ascending order, finishing program...");
            return;
        }

        System.out.print("[");

        for(int i = 0; i < nums.size(); i++){
            if(i > 0) {
                System.out.print(", ");
            }
            System.out.print(nums.get(i));
        }

        System.out.println("]");
        System.out.print("Type a target: ");
        target = reader.nextInt();

        targetPosition = binarySearch(nums, target);

        if(targetPosition > -1){
            System.out.print("Target position: " + targetPosition);
        }else{
            System.out.println("Target not found in the array's domain");
        }
    }
}
