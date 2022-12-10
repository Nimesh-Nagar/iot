var Product = /** @class */ (function () {
    function Product() {
        this.product_id = 12;
        this.product_name = "Maggie";
        this.product_price = 23.45;
    }
    return Product;
}());
var product_Obj = new Product;
console.log(product_Obj.product_id);
console.log(product_Obj.product_price);
console.log(product_Obj.product_name);
