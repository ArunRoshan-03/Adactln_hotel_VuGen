TC_07_logout()
{

	lr_think_time(33);

	web_custom_request("ocsp.comodoca.com_6", 
		"URL=http://ocsp.comodoca.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB7O\r\\xC5\\xE7\\xF1R$\\xE6\\xF7\\xBE\\xA3QF1&", 
		LAST);

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