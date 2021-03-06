(function($) {
	"use strict";
	$(document).ready(function(){
		$('#block-views-forums-block .views-field-body .field-content').each(function(){
      $(this).succinct({
          size: 250
      });
    });
		// Main menu superfish
		$('#main-menu > ul').superfish({
			delay: 200,
			animation: {opacity:'show', height:'show'},
			speed: 'fast',
			cssArrows: false,
			disableHI: true
		});

		// Mobile Menu
		$('#navigation-toggle').sidr({
			name: 'sidr-main',
			source: '#sidr-close, #site-navigation',
			side: 'left',
			displace: false
		});
		$(".sidr-class-toggle-sidr-close").click( function() {
			$.sidr('close', 'sidr-main');
			return false;
		});
	}); // End doc ready
})(jQuery);
