package com.exception_package;

class MyException extends Exception
{
	public MyException(String s)
	{
		super(s);
	}
}
public class Test2 {

	public static void main(String[] args) {
		
		
		    int i=20;
	        int j=0;
	        try {
	        	j=18/i;
	        	if(j==0)
	        	{
	        		throw new MyException("Result is 0 that why go to exception");
	        	}
	        
	        }
	        catch(ArithmeticException e)
	        {
	        	
	        	System.out.println(e+"invalid operation");
	        }
	        catch(MyException e)
	        {
	        	j=18/1;
	        	System.out.println(e+"here we divided by 1");
	        }
	       
	        
	        System.out.println("j="+j);
	        System.out.println("End of program");

	}

}
