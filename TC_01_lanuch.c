TC_01_lanuch()
{
	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_url("adactinhotelapp.com", 
		"URL=https://adactinhotelapp.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/js/login.js", ENDITEM, 
		"Url=/css/main.css", ENDITEM, 
		"Url=/img/main-image-hotel-app.png", ENDITEM, 
		"Url=/img/google-play.png", ENDITEM, 
		"Url=/img/AdactIn_logo.png", ENDITEM, 
		"Url=/img/hotel.jpg", ENDITEM, 
		"Url=/img/ios-button.png", ENDITEM, 
		LAST);
	return 0;
}
