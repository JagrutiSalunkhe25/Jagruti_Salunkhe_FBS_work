class Book
{
	int isbn;
	String title;
	String auth;
	String pub;
	double pri;

	void setIsbn(int i)
	{
		this.isbn=i;
	}
	void setTitle(String t)
	{
		this.title=t;
	}
	void setAuth(String a)
	{
		this.auth=a;
	}
	void setPub(String p)
	{
		this.pub=p;
	}
	void setPri(double pr)
	{
		this.pri=pr;
	}

	int getIsbn()
	{
		return this.isbn;
	}
	String getTitle()
	{
		return this.title;
	}
	String getAuth()
	{
		return this.auth;
	}
	String getPub()
	{
		return this.pub;
	}
	double getPri()
	{
		return this.pri;
	}

	Book()
	{
		this.isbn=123445;
		this.title="dreams";
		this.auth="keshav";
		this.pub="navneet";
		this.pri=500;
		System.out.println("default constructor");
	}
	Book(int i,String t,String a,String p,double pr)
	{
		this.isbn=i;
		this.title=t;
		this.auth=a;
		this.pub=p;
		this.pri=pr;
		System.out.println("parameterized constructor");
	}

	void display()
	{
		System.out.println("Book ISBN is :"+this.isbn);
		System.out.println("Book title is :"+this.title);
		System.out.println("Book author is :"+this.auth);
		System.out.println("Book publisher is :"+this.pub);
		System.out.println("Book price is :"+this.pri);
	}
}

class Test
{
	public static void main(String[] args)
	{
		Book b1=new Book();
		b1.display();
		Book b2=new Book(67890,"java begineers","james gosling","mcg",800);
		b2.display();
	}
}
