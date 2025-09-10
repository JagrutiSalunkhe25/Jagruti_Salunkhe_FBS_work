class SalesManager
{
	int id,sal,trgt,incen;
	String name;

	void setId(int a)
	{
		this.id=a;
	}

	void setSal(int s)
	{
		this.sal=s;
	}
	void setTrgt(int t)
	{
		this.trgt=t;
	}
	void setIncen(int i)
	{
		this.incen=i;
	}
	void setName(String str)
	{
		this.name=str;
	}

	int getId()
	{
		return this.id;
	}
	int getSal()
	{
		return this.sal;
	}
	int getTrgt()
	{
		return this.trgt;
	}
	int getIncen()
	{
		return this.incen;
	}
	String getName()
	{
		return this.name;
	}

	void display()
	{
	     System.out.println("salesM id is :"+this.id);
	     System.out.println("salesM salary is :"+this.sal);
	     System.out.println("sales target is :"+this.trgt);
	     System.out.println("salesM incentive is :"+this.incen);
	     System.out.println("salesM name is :"+this.name);
	}


}//salesmanager ends here

class Test
{
	public static void main(String[] args)
	{
            SalesManager s1=new SalesManager();
	    s1.setId(101);
	    s1.setSal(25000);
	     s1.setTrgt(50);
	     s1.setIncen(10000);
            s1.setName("Ketan");
            
		s1.display();
	}


}//test ends here
