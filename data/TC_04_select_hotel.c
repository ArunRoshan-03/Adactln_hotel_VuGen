TC_04_select_hotel()
{

	lr_think_time(40);

	web_submit_data("BookHotel.php", 
		"Action=https://adactinhotelapp.com/BookHotel.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://adactinhotelapp.com/SelectHotel.php", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=radiobutton_0", "Value=0", ENDITEM, 
		"Name=total_radiobutton", "Value=1", ENDITEM, 
		"Name=hotel_name_0", "Value=Hotel Creek", ENDITEM, 
		"Name=location_0", "Value=Sydney", ENDITEM, 
		"Name=rooms_0", "Value=8 Rooms", ENDITEM, 
		"Name=arr_date_0", "Value=23/08/2023", ENDITEM, 
		"Name=dep_date_0", "Value=24/08/2023", ENDITEM, 
		"Name=no_days_0", "Value=1 Days", ENDITEM, 
		"Name=room_type_0", "Value=Double", ENDITEM, 
		"Name=price_night_0", "Value=AUD $ 225", ENDITEM, 
		"Name=total_price_0", "Value=AUD $ 235", ENDITEM, 
		"Name=continue", "Value=Continue", ENDITEM, 
		"Name=hotel_name", "Value=Hotel Creek", ENDITEM, 
		"Name=location_name", "Value=Sydney", ENDITEM, 
		"Name=room_types", "Value=Double", ENDITEM, 
		"Name=rooms_no", "Value=8", ENDITEM, 
		"Name=arr_date", "Value=23/08/2023", ENDITEM, 
		"Name=dep_date", "Value=24/08/2023", ENDITEM, 
		"Name=no_days", "Value=1", ENDITEM, 
		"Name=adults_room", "Value=2", ENDITEM, 
		"Name=children_room", "Value=2", ENDITEM, 
		"Name=price_night", "Value=AUD $ 225", ENDITEM, 
		"Name=total_price", "Value=AUD $ 235", ENDITEM, 
		LAST);

	return 0;
}
