package com.exception_package;

class A
{
	public void show() throws ClassNotFoundException
	{
		//Class.forName("Demo_class");
		String s="100";
		System.out.println("string= to number="+Integer.parseInt(s));
		//Class.forName("Demo_class");
		System.out.println("From show method");
	}
	public void show1()
	{
		System.out.println(18/0);
		System.out.println("From show1 method");
	}
}
public class Test3 {

	public static void main(String[] args) {
		
      A obj=new A();
      try
      {
    	  obj.show();
    	  
      }
      catch(ClassNotFoundException e){
    	  System.out.println("class not found "+e);
    	  
      }
     // obj.show1();
      
      finally {
    	  try {
        	  obj.show1();
          }
          catch(ArithmeticException e1)
          {
        	  System.out.println("Invalid operation="+e1);
          }
      }
     
      
	}
}
