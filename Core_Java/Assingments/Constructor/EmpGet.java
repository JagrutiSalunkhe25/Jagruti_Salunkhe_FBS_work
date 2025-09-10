class Employee
{
     int id,sal;
     String name;
     
        void setId(int a)
	{
		id=a;
	}
	
	void setSal(int s)
	{
		sal=s;
	}

	void setName(String str)
	{
		name=str;
	}

	int getId()
	{
		return this.id;
	}
	int getSal()
	{
		return this.sal;
	}
	String getName()
	{
		return this.name;
	}

	void display()
	{
		System.out.println("emp id is :"+this.id);
		System.out.println("emp sal is :"+this.sal);
		System.out.println("emp name is :"+this.name);
	}


	Employee()
	{
		this.id=101;
		this.sal=30000;
		this.name="jagss";
		System.out.println("default constructor");
	}

	Employee(int i,int s,String n)
	{
		this.id=i;
		this.sal=s;
		this.name=n;
		System.out.println("parameterized constructor");
	}

  }   
//class employee ends here
class Test
{
      public static void main(String[] args)
	{
            Employee e1=new Employee();
           e1.display();
		    Employee e2=new Employee(103,20000,"ketan");
           e2.display();

	}
}//class test ends here
