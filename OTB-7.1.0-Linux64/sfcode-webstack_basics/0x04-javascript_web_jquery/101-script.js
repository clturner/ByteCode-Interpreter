$(document).ready(function () {
  $('#add_item').click(function () {
    $('UL.my_list').append('<li>Item</li>');
  });
});

$(document).ready(function () {
  $('#remove_item').click(function () {
    $('UL.my_list :nth-child(1)').remove();
  });
});

$(document).ready(function () {
  $('#clear_list').click(function () {
    $('UL.my_list').empty();
  });
});
