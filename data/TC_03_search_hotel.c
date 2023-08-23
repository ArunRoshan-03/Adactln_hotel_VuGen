TC_03_search_hotel()
{

	lr_think_time(56);

	web_submit_data("SelectHotel.php", 
		"Action=https://adactinhotelapp.com/SelectHotel.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://adactinhotelapp.com/SearchHotel.php", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=location", "Value=Sydney", ENDITEM, 
		"Name=hotels", "Value=Hotel Creek", ENDITEM, 
		"Name=room_type", "Value=Double", ENDITEM, 
		"Name=room_nos", "Value=8", ENDITEM, 
		"Name=datepick_in", "Value=23/08/2023", ENDITEM, 
		"Name=datepick_out", "Value=24/08/2023", ENDITEM, 
		"Name=adult_room", "Value=2", ENDITEM, 
		"Name=child_room", "Value=2", ENDITEM, 
		"Name=Submit", "Value=Search", ENDITEM, 
		"Name=datepick_diff", "Value=1", ENDITEM, 
		LAST);

	return 0;
}
