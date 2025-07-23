let users = {};
let currentUser = null;

function updateDashboard() {
    const balance = users[currentUser].balance.toFixed(2);
    const transfers = users[currentUser].history.map(h => `➡️ ${h}`).join("\n");
    document.getElementById("output").textContent = `Баланс: ${balance} лв.\nИстория:\n${transfers}`;
}

document.getElementById("transferForm").addEventListener("submit", function(event) {
    event.preventDefault();

    const from = document.getElementById("from").value.trim();
    const to = document.getElementById("to").value.trim();
    const amount = parseFloat(document.getElementById("amount").value);

    if (!users[from] || !users[to]) {
        alert("Невалидна сметка!");
        return;
    }
    if (amount <= 0 || users[from].balance < amount) {
        alert("Недостатъчна наличност или невалидна сума!");
        return;
    }

    users[from].balance -= amount;
    users[to].balance += amount;

    users[from].history.push(`Изпратени ${amount.toFixed(2)} лв. до ${to}`);
    users[to].history.push(`Получени ${amount.toFixed(2)} лв. от ${from}`);

    updateDashboard();
});

document.getElementById("loginForm").addEventListener("submit", function(e) {
    e.preventDefault();
    const user = document.getElementById("username").value.trim();
    if (!users[user]) {
        users[user] = { balance: 1000, history: [] }; // начален баланс
    }
    currentUser = user;
    document.getElementById("welcome").textContent = `Добре дошъл, ${user}`;
    updateDashboard();
});
