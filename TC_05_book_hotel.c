TC_05_book_hotel()
{

	lr_think_time(12);
	lr_param_sprintf("P_fakeCreditCard", "4%04d98765432109%03d", rand() % 10000, rand() % 1000); 
	lr_param_sprintf("P_fakeExpiryYear", "%04d", randomYear);
	lr_param_sprintf("P_fakeExpiryMonth", "%02d/",randomMonth);

	web_submit_data("BookingConfirm.php",
		"Action=https://adactinhotelapp.com/BookingConfirm.php",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://adactinhotelapp.com/BookHotel.php",
		"Snapshot=t54.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=first_name", "Value={p_firstname}", ENDITEM,
		"Name=last_name", "Value={p_lastname}", ENDITEM,
		"Name=address", "Value={p_address}", ENDITEM,
		"Name=cc_num", "Value={P_fakeCreditCard}", ENDITEM,
		"Name=cc_type", "Value=MAST", ENDITEM,
		"Name=cc_exp_month", "Value={P_fakeExpiryMonth}", ENDITEM,
		"Name=cc_exp_year", "Value={P_fakeExpiryYear}", ENDITEM,
		"Name=cc_cvv", "Value=1234", ENDITEM,
		"Name=hotel_name_hid", "Value={p_hotel_name}", ENDITEM,
		"Name=location_name_hid", "Value={p_location}", ENDITEM,
		"Name=room_types_hid", "Value={p_room_types}", ENDITEM,
		"Name=rooms_no_hid", "Value={p_room}", ENDITEM,
		"Name=arr_date_hid", "Value={P_pick_in}", ENDITEM,
		"Name=dep_date_hid", "Value={P_pick_out}", ENDITEM,
		"Name=no_days_hid", "Value=1", ENDITEM,
		"Name=adults_room_hid", "Value={p_adults_per_room}", ENDITEM,
		"Name=children_room_hid", "Value=2", ENDITEM,
		"Name=price_night_hid", "Value=AUD $ 225", ENDITEM,
		"Name=total_price_hid", "Value=AUD $ 235", ENDITEM,
		"Name=gst_hid", "Value=AUD $ 23.5", ENDITEM,
		"Name=final_price_hid", "Value=AUD $ 258.5", ENDITEM,
		LAST);

	lr_think_time(16);

	web_url("BookedItinerary.php", 
		"URL=https://adactinhotelapp.com/BookedItinerary.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://adactinhotelapp.com/BookingConfirm.php", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
