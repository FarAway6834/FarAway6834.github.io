function addList(elem, value) {
    const li = document.createElement("li");
    li.appendChild(document.createTextNode(value));
    elem.appendChild(li);
}

function initialList(elem, arrv) {
    arrv.forEach((value) => addList(elem, value));
}

function copy(copyTxt) {
    navigator.clipboard.writeText(copyTxt);
}

var nowurl = new URL(window.location);

var arrs = JSON.parse(nowurl.searchParams.get('a'));

var lists = document.getElementById('lists')

initialList(lists, arrs);

function nowurlstr() {
    return nowurl.toString();
}

function nowurlcopy() {
    copy(nowurlstr());
}

function pushs(data, elem) {
    arrs.push(data);
    nowurl.searchParams.set('a', JSON.stringify(arrs));
    history.pushState(null, null, nowurlstr());
    nowurlcopy();
    addList(elem, data)
}

function inputui(elem, ins) {
    pushs(ins.value, elem);
    ins.value = null;
}

const inputag = document.getElementById('inputs');

function btnevntedui() {
    inputui(lists, inputag);
}