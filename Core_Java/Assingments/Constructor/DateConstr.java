class Date
{
    int day,month,year;
    String dow;

    void setDay(int a)
    {
        this.day=a;
    }
	void setMonth(int m)
    {
        this.month=m;
    }
    void setDOW(String str)
    {
        dow=str;
    }
	int getDay()
	{
	   return this.day;
	}
	int getMonth()
	{
	   return this.month;
	}
	int getYear()
	{
	   return this.year;
	}
	void display()
	{
	   System.out.println(this.day+"/"+this.month+"/"+this.year);
	}

	Date()
	{
		this.day=7;
		this.month=11;
		this.year=2025;
		this.dow="Sat";
		System.out.println("default constructor");
	}

	Date(int d,int m,int y,String s )
	{
		this.day=d;
		this.month=m;
		this.year=y;
		this.dow=s;
		System.out.println("parameterized constructor");

	}


    
}//class date ends here

class Test
{
    public static void main(String[] args)
    {
        Date d1;
        d1=new Date();
	Date d2=new Date(20,5,2003,"tuesday");
        d1.display();
	d2.display();

     }
}//class test ends here