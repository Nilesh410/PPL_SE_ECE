package com.file_operation;

import java.io.IOException;
import java.io.PrintWriter;

public class Print_Wrtie_File {

	public static void main(String[] args) {
		try {
            PrintWriter writer = new PrintWriter("output.txt");

            writer.println("Hello, Java!");
            writer.println("PrintWriter makes file writing easy.");
            writer.printf("PI value: %.2f\n", Math.PI);
            
            writer.close();
            System.out.println("Data written successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }

	}

}
