package com.exception_package;

public class Test1 {

	public static void main(String[] args) {
		
        int i=2;
        int j=0;
        int arr[]=new int[5];
        String s=null;
        String s1="ABC";
        
        try {
        	j=18/i;
        	System.out.println("arr[2]="+arr[2]);
        	System.out.println("arr[6]="+arr[4]);
        	//System.out.println("length of string ="+s.length());
        	System.out.println(Integer.parseInt(s1));
        }
        catch(ArithmeticException e)
        {
        	System.out.println("invalid operation"+e);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
        	System.out.println("try invalid index"+e);
        }
        catch(Exception e)
        {
        	System.out.println(e);
        }
        
        System.out.println("j="+j);
        System.out.println("End of program");
	}

}
