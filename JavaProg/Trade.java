public class Trade{
	private String ID,symbol;
	private int quantity, price;

	Trade(String id, String sym, int quant, int pr){
		ID=id;
		symbol=sym;
		quantity=quant;
		price=pr;
	}
  
	Trade(String id, String sym, int quant){
		this(id,sym,quant,0);
	}
	public void setPrice(int p){
		if(p<0){
			throw new IllegalArgumentException();
		}
		price=p;
	}   
}
