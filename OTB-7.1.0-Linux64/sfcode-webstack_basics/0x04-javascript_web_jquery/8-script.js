$.getJSON('https://swapi.co/api/films/?format=json', function (data) {
  $.each(data, function (i, j) {
    $('ul#list_movies').text(data.results[i].title);
  });
});
