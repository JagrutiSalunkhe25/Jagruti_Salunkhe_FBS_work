package p4;

import java.util.Date;

public class Transaction {
	protected int tId;
	protected Date tDate;
	protected String tType;
	protected double tAmount;
	protected String remarks;

    public Transaction(int tId, Date tDate, String tType, double tAmount, String remarks) {
        this.tId = tId;
        this.tDate = tDate;
        this.tType = tType;
        this.tAmount = tAmount;
        this.remarks = remarks;
    }

   

    public void display() {
        System.out.println(this.toString());
    }

    int gettId() {
		return tId;
	}

	void settId(int tId) {
		this.tId = tId;
	}

	public Date gettDate() {
		return tDate;
	}

	void settDate(Date tDate) {
		this.tDate = tDate;
	}

	String gettType() {
		return tType;
	}

	void settType(String tType) {
		this.tType = tType;
	}

	double gettAmount() {
		return tAmount;
	}

	void settAmount(double tAmount) {
		this.tAmount = tAmount;
	}

	String getRemarks() {
		return remarks;
	}

	void setRemarks(String remarks) {
		this.remarks = remarks;
	}
	
    public String toString() {
        return "Transaction [ID=" + gettId() + ", Date=" + gettDate() + ", Type=" + gettType() + ", Amount=" + gettAmount() + ", Remarks=" + getRemarks() + "]";
    }
}

