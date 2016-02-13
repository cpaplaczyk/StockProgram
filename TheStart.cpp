//suedo code Stock Program main algorithum.
//Created by Clayton Paplaczyk

//Discription: 
//This program takes stock information from Google every 1 to 10 minutes bassed on variable i on line....
//Once pulled information is run through alg that sets a point value to ticker then goes through each ticker
//within file and orders them based upon how many +1's that they get, will output multiple stocks to look at
//20 stocks will we outputed to look at and possible buys.

//Wants to add...
//Will add a purchased stock to list to watch closely when to sell, will let you know when to sell based on
//the already in use alg.

//variables

String ticker;
int tickNum = 0; //set to grab first ticket from list
char color, color1 //Red or Green color
double open, high, low, close, volume, body //current close
double open1, high1, low1, close1, volume1, body1 //previous close



do {

	Read next ticker from TickerList.txt set to ticker variable
	if(TickerList.txt == empty)
		boolean emptyTicker = true; //info in .txt file empty

	// http://www.google.com/finance/getprices?i=60&p=1d&f=d,o,h,l,c,v&df=cpct&q=MCD
	// http://stackoverflow.com/questions/6159118/using-java-to-pull-data-from-a-webpage
	//Get most recent ticker information from Google i= set time in seconds, p= time frame (d=days, m=months, y=years), q=ticker to input.
	//Get older ticker information save to 1,2,3...etc...
	//parse through Google information past line 7 start at line 8 to read information UNIX time convert start time, date, open, high, low, close, volume.

	//Red or Green, must repeat for previous information before follow-up
	if(open < close)
		color = g;
	else
		color = r;

	//Engulfing Pattern - Bearish (harami), possible trend reversal --
	if(color==r && color1==g && open>close1 && close>open1)
		System.out.println("NO BUY"+ticker);
	
	//Engulfing Pattern - Bullish, downtrend has lost momentum ++
	if(color==g && color1==r && open<close1 && close<open1)
		System.out.println("BUY"+ticket);

	//Evening Start - Bearish, top reversal --
	if(

	//Harami - Bearish, look for light volume --
	if(color==r && color1==g && open<close1 && close>open1)
		Stytem.out.println("NO BUY"+ticker);

	//Harami - Bullish, possible trend reversal ++
	if(color==g && color1==r && open>open1 && close>close1)
		System.out.println("BUY"+ticker):

	//Harami Cross - Bearish, uptrend has been reversed --
	if(color1==g && open==close && low>open1 && high<close1)//will need to adjust for doji since it can be close will need to set a limit
		System.out.println("NO BUY"+ticker);

	//Harami Cross - Bullish, downtrend has been reversed ++
	if(color1==r && open==close && low>close1 && high<open1)//will need to adjust for doji
		System.out.println("BUY"+ticker);	

	//

	tickNum ++; //index for next ticket

} while (!emptyTicker)












