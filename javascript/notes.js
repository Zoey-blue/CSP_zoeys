let images = ["https://www.tnnursery.net/cdn/shop/files/pineapple-new3.jpg?v=1736956964", "https://www.dole.com/sites/default/files/styles/1024w768h-80/public/media/2025-01/pineaple.png?itok=6P-hraWo-o1Nbx-ho","https://media.self.com/photos/5b4371cc4d0c3c282a8878d3/4:3/w_2560%2Cc_limit/pineapple.jpg", "https://lomi.com/cdn/shop/articles/pineapple.jpg?v=1646021546" ]
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

function hello(){
    let name = window.prompt("what is your name?")
    document.getElementById("title").innerHTML. ="hello world" + name + "!"

}

function hover(){
    document.getElementById("img").src= "https://www.tnnursery.net/cdn/shop/files/pineapple-new3.jpg?v=1736956964"
}

function pop(){
    window.alert
    ("really don't click that!")
}

function show(){
    document.getElementById("more").style.display = "block"
}
