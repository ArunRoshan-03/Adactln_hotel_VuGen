TC_03_search_hotel()
{

	lr_think_time(12);
	randomDay = rand() % 28 + 1; 
	randomMonth = rand() % 12 + 1; 
    randomYear = rand() % 10 + 2023; 
   
    lr_param_sprintf("P_pick_in",  "%02d/%02d/%04d", randomDay, randomMonth, randomYear);
    
    lr_param_sprintf("P_pick_out",  "%02d/%02d/%04d", randomDay-1, randomMonth-1, randomYear-1);
  	
	web_submit_data("SelectHotel.php",
		"Action=https://adactinhotelapp.com/SelectHotel.php",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://adactinhotelapp.com/SearchHotel.php",
		"Snapshot=t52.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=location", "Value={p_location}", ENDITEM,
		"Name=hotels", "Value={p_hotel_name}", ENDITEM,
		"Name=room_type", "Value={p_room_types}", ENDITEM,
		"Name=room_nos", "Value={p_room}", ENDITEM,
		"Name=datepick_in", "Value={P_pick_in}", ENDITEM,
		"Name=datepick_out", "Value={P_pick_out}", ENDITEM,
		"Name=adult_room", "Value={p_adults_per_room}", ENDITEM,
		"Name=child_room", "Value=2", ENDITEM,
		"Name=Submit", "Value=Search", ENDITEM,
		"Name=datepick_diff", "Value=1", ENDITEM,
		LAST);

	return 0;
}
