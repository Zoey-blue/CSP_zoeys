let images = ["https://cdn.vectorstock.com/i/1000v/12/03/background-different-colors-separated-squares-vector-32141203.jpg , https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSYsCeROwcvwl23u8kHo6vMxV4y5cn3hZ-VqUcN7tZsX1eLnoD4MGb6a9rMC1au1JeidKI& "]
let counter = 0 

function change (){
    if (counter < images.length){
        ("img").src = images
        [counter]
        counter += 1 
    }else{
        counter = 0
        document.getElementById
        ("img").src = images
        [counter]
    }
    document.getElementById("img")
    src=images[counter]
}