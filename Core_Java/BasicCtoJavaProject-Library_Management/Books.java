import java.util.Scanner;

class Books {

        
		int bookID; 
		String bookName;
		String athrName; 
		String ctgry;
	    double price;
		double rating;
		
		Books() {
			
			bookID = 0;
			bookName ="not given";
			athrName = "not given";
			ctgry = "not given";
			price = 0;
			rating = 0;
		}

		

		Books(int bookID, String bookName, String athrName, String ctgry, double price, double rating) {
			
			this.bookID = bookID;
			this.bookName = bookName;
			this.athrName = athrName;
			this.ctgry = ctgry;
			this.price = price;
			this.rating = rating;
		}


		
		int getBookID() {
			return bookID;
		}



		void setBookID(int bookID) {
			this.bookID = bookID;
		}



		String getBookName() {
			return bookName;
		}



		void setBookName(String bookName) {
			this.bookName = bookName;
		}



		String getAthrName() {
			return athrName;
		}



		void setAthrName(String athrName) {
			this.athrName = athrName;
		}



		String getCtgry() {
			return ctgry;
		}



		void setCtgry(String ctgry) {
			this.ctgry = ctgry;
		}



		double getPrice() {
			return price;
		}



		void setPrice(double price) {
			this.price = price;
		}



		double getRating() {
			return rating;
		}



		void setRating(double rating) {
			this.rating = rating;
		}



		void display()
		{
			System.out.println("ID: "+this.bookID);
			System.out.println("Name: "+this.bookName);
			System.out.println("Author: "+this.athrName);
			System.out.println("Category: "+this.ctgry);
			System.out.println("Price: "+this.price);
			System.out.println("Rating: "+this.rating);
			
		}
		

}


class Library
{
	int count=0;
	Scanner sc=new Scanner(System.in);
	Books[] bookArr=new Books[20];
	
	
//	Library() {
//		int count=0;
//	}

	void addBook()
	{
		
	        Books b = new Books();

	        System.out.print("Enter Book ID: ");
	        b.setBookID(sc.nextInt());
	        sc.nextLine(); 

	        System.out.print("Enter Book Name: ");
	        b.setBookName(sc.nextLine());

	        System.out.print("Enter Author Name: ");
	        b.setAthrName(sc.nextLine());

	        System.out.print("Enter Category: ");
	        b.setCtgry(sc.nextLine());

	        System.out.print("Enter Price: ");
	        b.setPrice(sc.nextDouble());

	        System.out.print("Enter Rating: ");
	        b.setRating(sc.nextDouble());

	        bookArr[count++] = b;
	        System.out.println("Book Added Successfully!");
	    
	}
	
	void deleteBook()
	{
		int id,start=0;
		System.out.println("enter the book id to remove : ");
		id=sc.nextInt();
		for(int i=0;i<count;i++)
		{
			if(bookArr[i].getBookID()==id)
			{
				start=i;
				break;
			}
		}
		
		for(int i=start;i<count-1;i++)
		{
			bookArr[i]=bookArr[i+1];
		}
		bookArr[count-1] = null;
		count--;

	}
	
	void displayBooks()
	{
		for(int i=0;i<count;i++)
		{
			bookArr[i].display();
			System.out.println("------------------------------------------------");
		}
	}
	
	void searchByID()
	{
		int id,c=0;
		System.out.println("enter the book id to find : ");
		id=sc.nextInt();
		for(int i=0;i<count;i++)
		{
			if(bookArr[i].getBookID()==id)
			{
				c++;
				System.out.println("book id found !");
				bookArr[i].display();
				break;
			}
			
		}
		if(c==0)
		{
			System.out.println("book id not found ");
		}

	}
	
	
	void searchByName()
	{
		String name;
		int c=0;
		System.out.println("enter the book name to find : ");
		name=sc.nextLine();
		for(int i=0;i<count;i++)
		{
			boolean res=(bookArr[i].getBookName()).equals(name);
			if(res==true)
			{
				c++;
				bookArr[i].display();
				break;
			}
			
		}
		if(c==0)
		{
			System.out.println("book name not found ");
		}

	}
	
	
	void searchByAuthor()
	{
		String name;
		int c=0;
		System.out.println("enter the author name to find : ");
		name=sc.nextLine();
		for(int i=0;i<count;i++)
		{
			boolean res=(bookArr[i].getAthrName()).equals(name);
			if(res==true)
			{
				c++;
				bookArr[i].display();
				break;
			}
			
		}
		if(c==0)
		{
			System.out.println("author name not found ");
		}
	}
	
	
	void searchByCategory()
	{
		String name;
		int c=0;
		System.out.println("enter the category to find : ");
		name=sc.nextLine();
		for(int i=0;i<count;i++)
		{
			boolean res=(bookArr[i].getCtgry()).equals(name);
			if(res==true)
			{
				c++;
				bookArr[i].display();
				break;
			}
			
		}
		if(c==0)
		{
			System.out.println("author name not found ");
		}
	}
	
	
	void updateData()
	{
		 double nPrice,nRate;
			int id;
		    System.out.println("enter book id to update : ");
		    id=sc.nextInt();
			System.out.println("enter new Bookprice\n: ");
			nPrice=sc.nextDouble();
			System.out.println("enter new Rating \n: ");
			nRate=sc.nextDouble();
			
			
			for(int i=0;i<count;i++)
			{
				if(bookArr[i].getBookID()==id)
				{
					bookArr[i].setPrice(nPrice);
					bookArr[i].setRating(nRate);
					
					bookArr[i].display();
					System.out.println("--------------------------------------------------\n");
					break;
				}
				
			}

	}
	
	
	void sortByPrice()
	{
		Books temp;
		for(int i=0;i<count-1;i++)
		{
			for(int j=i+1;j<count;j++)
			{
				
				if(bookArr[i].getPrice() > bookArr[j].getPrice())
				{
				    temp = bookArr[i];
				    bookArr[i] = bookArr[j];
				    bookArr[j] = temp;
				}
			}
		}
		
		System.out.println("books sorted by price ....");
		
		for(int i = 0; i < count; i++)
	    {
			bookArr[i].display();
	        System.out.println("------------------------------------------\n");
	    }


	}
	
	
	void sortByRating()
	{
		Books temp;
		for(int i=0;i<count-1;i++)
		{
			for(int j=i+1;j<count;j++)
			{
				
				if(bookArr[i].getRating() > bookArr[j].getRating())
				{
				    temp = bookArr[i];
				    bookArr[i] = bookArr[j];
				    bookArr[j] = temp;
				}
			}
		}
		
		System.out.println("books sorted by rating ....");
		
		for(int i = 0; i < count; i++)
	    {
			bookArr[i].display();
	        System.out.println("------------------------------------------\n");
	    }
	}
	
}




class Test
{
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
//    	b1.display();
		
		Library lib=new Library();
//		lib.addBook();
//		lib.bookArr[0].display(); 
		
		int ch;
		
		
		System.out.println("Book Management System");
        while (true) {
            System.out.println("\n1. Add Book\n2. Remove Book\n3. Display Books\n4. Search by ID\n5. Search by Name\n6. Search by Author\n7. Search by Category\n8. Update Data\n9. Sort by Price\n10. Sort by Rate\n11. EXIT");
            System.out.print("Enter your choice: ");
            ch = sc.nextInt();

            if (ch == 11) {
                System.out.println("Exiting...");
                break;
            }

            switch (ch) {
                case 1: lib.addBook(); break;
                case 2: lib.deleteBook(); break;
                case 3: lib.displayBooks(); break;
                case 4: lib.searchByID(); break;
                case 5: lib.searchByName(); break;
                case 6: lib.searchByAuthor(); break;
                case 7: lib.searchByCategory(); break;
                case 8: lib.updateData(); break;
                case 9: lib.sortByPrice(); break;
                case 10: lib.sortByRating(); break;
               
                default: System.out.println("Invalid choice!");
            }
        }
	}
}