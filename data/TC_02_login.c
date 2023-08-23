TC_02_login()
{

	lr_think_time(33);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_submit_data("adactinhotelapp.com_2", 
		"Action=https://adactinhotelapp.com/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://adactinhotelapp.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=ArunRoshan0308", ENDITEM, 
		"Name=password", "Value=8546C1", ENDITEM, 
		"Name=login", "Value=Login", ENDITEM, 
		LAST);

	return 0;
}
