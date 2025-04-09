package com.file_operation;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Character_Stream {

	public static void main(String[] args) {
		String fileName = "data.txt";

        // Writing to a file using FileWriter
        try (FileWriter writer = new FileWriter(fileName)) {
            writer.write("Hello, Java Streams!\n");
            writer.write("File I/O Operations.");
            System.out.println("Data written to file.");
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Reading from a file using FileReader
        try (FileReader reader = new FileReader(fileName)) {
            int data;
            while ((data = reader.read()) != -1) {
                System.out.print((char) data);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

	}

}
