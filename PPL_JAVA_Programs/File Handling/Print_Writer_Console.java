package com.file_operation;

import java.io.PrintWriter;

public class Print_Writer_Console {

	public static void main(String[] args) {
		PrintWriter writer = new PrintWriter(System.out);

        writer.println("Writing to console using PrintWriter.");
        writer.printf("Value of PI: %.4f\n", Math.PI);
        
        writer.flush();  // Ensure all data is written to console
        writer.close();

	}

}
