let x: String! = readLine()
let arr: [String.SubSequence] = x!.split(separator: " ")
let y: Int! = Int(arr[0])
let z: Int! = Int(arr[1])
var total: Int = 0 
var input: String?
var inputInt: Int?
for _ in 0..<y {
    input = readLine()
    inputInt = Int(input!)
    total = total + inputInt!
}
if(total <= z!){
    print("Jebb")
} else {
    print("Neibb")
}