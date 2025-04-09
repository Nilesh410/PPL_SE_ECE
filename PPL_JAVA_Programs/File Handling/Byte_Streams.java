package com.file_operation;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class Byte_Streams {

	public static void main(String[] args) {
		 String sourceFile = "source.txt";
	        String destinationFile = "copy.txt";

	        try (FileInputStream fis = new FileInputStream(sourceFile);
	             FileOutputStream fos = new FileOutputStream(destinationFile)) {

	            int data;
	            while ((data = fis.read()) != -1) {   // Reading byte by byte
	                fos.write(data);                   // Writing byte by byte
	            }

	            System.out.println("File copied successfully!");

	        } catch (IOException e) {
	            e.printStackTrace();
	        }

	}

}
