import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

/*
Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 
's in 's binary representation. When working with different bases, it is common to show the base as a subscript.
*/

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        bufferedReader.close();
        ArrayList<Integer> binary = new ArrayList<>();
        while (n > 0.9){
            int m =  n % 2;
            n = n /2;
            binary.add(0, m);
            
        }
        
        int counter = 0;
        int max = 0;
        for (Integer x : binary){
        
            if (x == 1){
                ++counter;
            }
            if (max < counter){
                max = counter;
            }
            if (x == 0){
                counter = 0;
            }
        }
        System.out.println(max);
    }
}
