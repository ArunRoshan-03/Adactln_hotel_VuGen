TC_07_logout()
{

	lr_think_time(03);
	web_url("Logout.php", 
		"URL=https://adactinhotelapp.com/Logout.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://adactinhotelapp.com/BookedItinerary.php", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}