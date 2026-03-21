class QuantumEngine {
    constructor(seed = 1) {
        this.state = seed;
    }

    #entropy() {
        this.state = (this.state * 9301 + 49297) % 233280;
        return this.state / 233280;
    }

    static factorial(n) {
        return n <= 1 ? 1 : n * QuantumEngine.factorial(n - 1);
    }

    *waveFunctionCollapse(limit = 5) {
        for (let i = 1; i <= limit; i++) {
            yield Math.floor(this.#entropy() * 10) + i;
        }
    }

    async simulate(delay = 100) {
        return new Promise(resolve => {           
            setTimeout(() => {
                const values = [...this.waveFunctionCollapse()];
                const processed = values
                    .map(v => v ** 2)
                    .filter(v => v % 2 === 0)
                    .reduce((a, b) => a + b, 0);

                resolve({
                    raw: values,
                    result: processed,
                    meta: QuantumEngine.factorial(5)
                });
            }, delay);
        });
    }
}

// Closure-based observer
const createObserver = () => {
    let executions = 0;
    return () => ++executions;
};

// Execution
(async () => {
    const engine = new QuantumEngine(42);
    const observer = createObserver();

    const output = await engine.simulate();

    console.log("Raw Values:", output.raw);
    console.log("Processed Result:", output.result);
    console.log("Factorial Metadata:", output.meta);
    console.log("Execution Count:", observer());
})();