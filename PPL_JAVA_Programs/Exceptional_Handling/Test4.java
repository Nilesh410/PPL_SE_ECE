package com.exception_package;

class Class1
{
	public void method1() throws ClassNotFoundException
	{
		System.out.println("From method 1");
		Class.forName("Demo_class");
	}
	public void method2()
	{
		System.out.println("From method 2");
	}
}

class Class2 
{
	public void show() throws ClassNotFoundException
	{
		Class1 obj=new Class1();
		obj.method1();
		obj.method2();
	}
}
public class Test4 {

	public static void main(String[] args) {
	
       Class2 obj1=new Class2();
       try {
		obj1.show();
	} catch (ClassNotFoundException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
	}

}
