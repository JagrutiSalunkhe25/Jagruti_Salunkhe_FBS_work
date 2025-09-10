class Student
{
     int roll,marks;
     String name;
     
        void setRoll(int a)
	{
		this.roll=a;
	}
	
	void setMark(int s)
	{
		this.marks=s;
	}

	void setName(String str)
	{
		this.name=str;
	}
	
	int getRoll()
	{
		return this.roll;
	}
	int getMark()
	{
		return this.marks;
	}
	String getName()
	{
		return this.name;
	}

	void display()
	{
		System.out.println(this.roll+"/"+this.marks+"/"+this.name);

	}

	Student()
		{
			this.roll=22;
			this.marks=90;
			this.name="janvi";
			System.out.println("default constructor");
		}

		Student(int r,int m,String n)
		{
			this.roll=r;
			this.marks=m;
			this.name=n;
			System.out.println("parameterized constructor");
		}
	

  }  
// class student ends here

class Test
{
      public static void main(String[] args)
	{
            Student s1=new Student();
		s1.display();
		Student s2=new Student(44,67,"ketn");
		s2.display();
	}
}
//test ends here
