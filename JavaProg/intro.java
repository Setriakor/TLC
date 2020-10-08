import java.lang.Math;
import java.util.Random;

public class intro{
	public static void q2(){
		int rand= (int)(Math.random()*100)+1;
		System.out.println("Value is: " +rand);
		if(rand%2==0){
			System.out.println("even");
		}else{
			System.out.println("odd");
		}
		if(rand==0){
			System.out.println("frozen");
		}else if(rand>0 && rand<=14){
			System.out.println("cold");
		}else if(rand>14 && rand<=24){
			System.out.println("cool");
		}else if(rand>24 && rand<=40){
			System.out.println("warm");
		}else if(rand>40 && rand<=60){
			System.out.println("hot");
		}else if(rand>60 && rand<=80){
			System.out.println("very hot");
		}else if(rand>80 && rand<=99){
			System.out.println("extrmely hot");
		}else{
			System.out.println("boiling");
		}
	}

	public static void q3(){
		int rand= (int)(Math.random()*10);
		System.out.println("Value is: " +rand);
		if(rand==0){
			System.out.println("zero");
		}else if(rand==1){
			System.out.println("one");
		}else if(rand==2){
			System.out.println("two");
		}else if(rand==3){
			System.out.println("three");
		}else if(rand==4){
			System.out.println("four");
		}else if(rand==5){
			System.out.println("five");
		}else if(rand==6){
			System.out.println("six");
		}else if(rand==7){
			System.out.println("seven");
		}else if(rand==8){
			System.out.println("eight");
		}else{
			System.out.println("nine");
		}
	}

	public static void q4(){
		int rand;
		do{
			rand=new Random().nextInt(3+3)-3;
			System.out.println(rand);
		}while(rand !=0);
		//System.out.println(rand);
	}

	public static void q5(){
		for(int i=1;i<11;i++){
			System.out.println(i+" Timestable:");
			for(int j=0;j<13;j++){
				System.out.println(i+" x "+j+" = "+(i*j));
			}
			System.out.println();
		}
	}

	public static void q6(int n){
		//for(int i=0;i<6;i++){
			System.out.println(new Random().nextInt(n -1)+1);
		//}
	}
	public static void main(String[] args){
		q6(100);
	}
}
